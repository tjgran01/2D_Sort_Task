import csv

def main(repeats=1, orders_tag="pilot_3"):

    export_dir = "../configs/"

    if orders_tag == "pilot_2":
        conditions = ["WM_Low_AL_Low_VL_Low", "WM_High_AL_Low_VL_Low",
                        "WM_Low_AL_High_VL_Low", "WM_Low_AL_Low_VL_High",
                        "WM_Low_AL_Low_VL_Low", "WM_High_AL_Low_VL_Low",
                        "WM_Low_AL_High_VL_Low", "WM_Low_AL_Low_VL_High"]
    elif orders_tag == "pilot_3":
        conditions = ["WM_Low_AL_Low_VL_Low", "WM_High_AL_Low_VL_Low",
                        "WM_Low_AL_High_VL_Low", "WM_Low_AL_Low_VL_High",
                        "WM_Low_AL_Low_VL_Low", "WM_High_AL_Low_VL_Low",
                        "WM_Low_AL_High_VL_Low", "WM_Low_AL_Low_VL_High",
                        "WM_Low_AL_Low_VL_Low", "WM_High_AL_Low_VL_Low",
                        "WM_Low_AL_High_VL_Low", "WM_Low_AL_Low_VL_High"]
    elif orders_tag == "all_cond":
        conditions = ["WM_Low_AL_Low_VL_Low", "WM_High_AL_Low_VL_Low",
                         "WM_Low_AL_High_VL_Low", "WM_Low_AL_Low_VL_High",
                         "WM_High_AL_High_VL_Low", "MW_High_AL_Low_VL_High",
                         "MW_Low_AL_High_VL_High", "WM_High_AL_High_VL_High"]



    # Top row of .csv
    header = ["order_of_conditions (string with 27 possible values)",
              "task duration (int seconds)",
              "rest duration after task (int seconds)",
              "pause before rest (boolean)"]

    # Values for other parameters in config file.
    extra_params = ["60", "60", "TRUE"]

    # Latin Sqaure of condition orders.
    if orders_tag == "pilot_2":
        orders = [[1, 2, 8, 3, 7, 4, 6, 5],
                  [2, 3, 1, 4, 8, 5, 7, 6],
                  [3, 4, 2, 5, 1, 6, 8, 7],
                  [4, 5, 3, 6, 2, 7, 1, 8],
                  [5, 6, 4, 7, 3, 8, 2, 1],
                  [6, 7, 5, 8, 4, 1, 3, 2],
                  [7, 8, 6, 1, 5, 2, 4, 3],
                  [8, 1, 7, 2, 6, 3, 5, 4]]
    elif orders_tag == "pilot_3":
        orders =  [[1, 2, 12, 3, 11, 4, 10, 5, 9, 6, 8, 7],
                   [2, 3, 1, 4, 12, 5, 11, 6, 10, 7, 9, 8],
                   [3, 4, 2, 5, 1, 6, 12, 7, 11, 8, 10, 9],
                   [4, 5, 3, 6, 2, 7, 1, 8, 12, 9, 11, 10],
                   [5, 6, 4, 7, 3, 8, 2, 9, 1, 10, 12, 11],
                   [6, 7, 5, 8, 4, 9, 3, 10, 2, 11, 1, 12],
                   [7, 8, 6, 9, 5, 10, 4, 11, 3, 12, 2, 1],
                   [8, 9, 7, 10, 6, 11, 5, 12, 4, 1, 3, 2],
                   [9, 10, 8, 11, 7, 12, 6, 1, 5, 2, 4, 3],
                   [10, 11, 9, 12, 8, 1, 7, 2, 6, 3, 5, 4],
                   [11, 12, 10, 1, 9, 2, 8, 3, 7, 4, 6, 5],
                   [12, 1, 11, 2, 10, 3, 9, 4, 8, 5, 7, 6]]
    elif orders_tag == "all_cond":
        orders = [[1, 2, 8, 3, 7, 4, 6, 5],
                  [2, 3, 1, 4, 8, 5, 7, 6],
                  [3, 4, 2, 5, 1, 6, 8, 7],
                  [4, 5, 3, 6, 2, 7, 1, 8],
                  [5, 6, 4, 7, 3, 8, 2, 1],
                  [6, 7, 5, 8, 4, 1, 3, 2],
                  [7, 8, 6, 1, 5, 2, 4, 3],
                  [8, 1, 7, 2, 6, 3, 5, 4]]


    for indx, order in enumerate(orders):
        fname = f"config_{orders_tag}_{indx}.csv"
        print(len(order))
        print(len(conditions))
        condition_list = [conditions[i-1] for i in order]

        # Generate .csv data.
        rows = [header, ]
        for i in range(repeats):
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
