using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class ReadConfig
{
	private string csvPath = @"config.csv";
    private List<string[]> parameters = new List<string[]>();
        
    public ReadConfig()
	{
        using(var reader = new StreamReader(csvPath))
		{
			bool isHeader = true;
			while (!reader.EndOfStream)
			{
                //Ignore header
                if (isHeader)
				{
                    var line = reader.ReadLine();
                    var values = line.Split(',');
                    isHeader = false;
				}
				else
				{
					var line = reader.ReadLine();
                    var values = line.Split(',');
                    parameters.Add(values);
				}
			}
		}
	}

    public List<string[]> ReturnParams { get { return parameters; } }

}
