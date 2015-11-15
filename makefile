try: project.o
	cc project.o -o project -lgraph
project.o:project.c
	cc  project.c -c 
