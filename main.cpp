import pandas as pd
import random
data=pd.read_csv('data.csv')
data["Last Name"] = data["Full Name"].str.split().str[-1]
students_lin = data[data["Last Name"]=="Lin"]
print(students_lin['Full Name'].values[random.randint(0,len(students_lin)-1)])
