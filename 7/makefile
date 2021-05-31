all: buildMain buildTest

buildMain:
	g++ -o app 7.c

buildTest:
	g++ --coverage test.c -o test
	gcov test.c