#Commands to copy paste in anaconda [jupyter shell]

import panda as pd
import numpy as np

header_data=["dataset-headers-copy-paste"]

df=pd.read_csv("~/Desktop/tmp/abc.csv");
df.head();
df.tail(10);
df.describe(include="all");
df.info();

//Something skip

df.replace("?",np.nan,inplace=True);
df.head();


missing_data=ds.isnull();
missing_data.head(10);

for column in header:
	print(column)
	print(missing_data[column].value_counts())
	print("")


avg_norm_loss=df["normalized-losses"].astype('float').mean(axis-0);
print("Average of normalized-losses:",avg_norm_loss);

df["normalized-losses"].replace(np.nan,avg_norm_loss,inplace=True);
