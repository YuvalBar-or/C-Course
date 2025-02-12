CC=gcc
LIBLOOP= basicClassification.o advancedClassificationLoop.o 
LIBRECU= basicClassification.o advancedClassificationRecursion.o
AR=ar
FLAGS= -Wall -g

#make all
all: loops recursived recursives loopd mains maindloop maindrec

# clean
clean: 
	rm -f *.o *.a *.so mains maindloop maindrec

loops: libclassloops.a
libclassloops.a: $(LIBLOOP)
	$(AR) -rcs libclassloops.a $(LIBLOOP)
basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c

recursives: libclassrec.a
libclassrec.a: $(LIBRECU)
	$(AR) -rcs libclassrec.a $(LIBRECU)
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c


loopd: libclassloops.so
libclassloops.so: $(LIBLOOP)
	$(CC) -shared -fPIC -o libclassloops.so $(LIBLOOP)

recursived: libclassrec.so
libclassrec.so: $(LIBRECU)
	$(CC) -shared -fPIC -o libclassrec.so $(LIBRECU)

mains: main.o libclassrec.a
	$(CC) $(FLAGS) -o mains main.o libclassrec.a 

maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so 

maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so 
main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c