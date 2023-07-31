new commands:

	open = create a token to acces a file with X properties
		token = open("file name", X);

		X:
			- O_RDONLY you only can read the file (0)
			- O_WRONLY you only can write in the file (1)
			- O_RDWR you can read and write file (2)
			- O_CREAT create a file if not exist (?)

	read = using token copy N bits of file and insert in to buf
		read(token, buf, N);

	close = similar to the free command,
			frees the token so that it does not reference any
			files and can be used again

	write = write N bits of buf content in the file using token
		write(token, buf, N);

	you can change the token per POSIX

		POSIX:
			- STDIN_FILENO standard input (0)
			- STDOUT_FILENO stadard output (1)
			- STDERR_FILENO standard error (2)

