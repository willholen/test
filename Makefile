all: Test.class test


Test.class: Test.java
	javac Test.java

test: test.cpp
	c++ test.cpp -o test
