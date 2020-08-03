import csv

def main():

    export_dir = "../configs/"

    conditions = ["WM_Low_AL_Low_VL_Low", "WM_High_AL_Low_VL_Low",
                  "WM_Low_AL_High_VL_Low", "WM_Low_AL_Low_VL_Low",
                  "WM_Low_AL_Low_VL_Low", "WM_High_AL_Low_VL_Low",
                  "WM_Low_AL_High_VL_Low", "WM_Low_AL_Low_VL_Low"]

    # Top row of .csv
    header = ["order_of_conditions (string with 27 possible values)",
              "task duration (int seconds)",
              "rest duration after task (int seconds)",
              "pause before rest (boolean)"]

    # Values for other parameters in config file.
    extra_params = ["60", "60", "TRUE"]

    # Latin Sqaure of condition orders.
    orders = [[1, 2, 8, 3, 7, 4, 6, 5],
              [2, 3, 1, 4, 8, 5, 7, 6],
              [3, 4, 2, 5, 1, 6, 8, 7],
              [4, 5, 3, 6, 2, 7, 1, 8],
              [5, 6, 4, 7, 3, 8, 2, 1],
              [6, 7, 5, 8, 4, 1, 3, 2],
              [7, 8, 6, 1, 5, 2, 4, 3],
              [8, 1, 7, 2, 6, 3, 5, 4]]

    for indx, order in enumerate(orders):
        fname = f"config{indx}.csv"
        condition_list = [conditions[i-1] for i in order]

        # Generate .csv data.
        rows = [header, ]
        for condition in condition_list:
            row = [condition]
            for elm in extra_params: # list.insert() is annoting and directly modifies
                row.append(elm)      # the list without returning something new. This is lazy fix.
            rows.append(row)

        # write .csv
        with open(f"{export_dir}{fname}", "w", newline="") as out_csv:
            writer = csv.writer(out_csv, delimiter=",")

            for row in rows:
                writer.writerow(row)



if __name__ == "__main__":
    main()