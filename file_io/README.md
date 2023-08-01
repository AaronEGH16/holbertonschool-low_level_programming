new commands:

	open = create a TOKEN to acces a file with X properties

		Int token = open("file name", X);

		X:
			- O_RDONLY you only can read the file (0)
			- O_WRONLY you only can write in the file (1)
			- O_RDWR you can read and write file (2)
			- O_CREAT create a file if not exist (?) [you need asignate file propierties (similar with bash)]
					*_._._._ (first char modifi permisons to change propierties)
					ej: 0600 (the propieties can`t be modifiead and only user can R and W)
			- O_APPEND insert a new content at end of file (?)

	read = using TOKEN copy N bits of file and insert in to BUF and return count of bits readed

		ssize_t count = read(TOKEN, BUF, N);

	close = similar to the free command,
		frees the TOKEN so that it does not reference any files and can be used again

		close(TOKEN);

	write = write N bits of BUF content in the file using TOKEN and return count of bits writed

		ssize_t count = write(TOKEN, BUF, N);

	you can change the TOKEN per POSIX

		POSIX:
			- STDIN_FILENO standard input (0)
			- STDOUT_FILENO stadard output (1)
			- STDERR_FILENO standard error (2)

