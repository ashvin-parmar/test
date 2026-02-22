for file in *.c; do
	gcc "$file" -o "${file%.c}.out";
done
for file in *.cpp; do
	g++ "$file" -o "${file%.cpp}.out";
done
