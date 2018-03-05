CC = gcc
CXX = g++
CFLAGS = -O -g -DDBG -std=c99 -D_REENTRANT -Wall -DUSE_PTHREAD -pthread
LDFLAGS = -ldl -lnsl -lm -lpthread

#wildcard 对 c文件进行展开
SRCS = $(wildcard *.c) $(wildcard *.cpp) 
#去除路径信息
dir=$(notdir $(SRCS))
# 把后缀.c 替换成 .o
 OBJS = $(patsubst %.c, %.o, $(patsubst %.cpp, %.o,$(dir))  )

# //OBJS = main1.o main.o
#
# DATALIBS = dblib/lib.a
# ZIPLIBS = ZipCoder/ZipCoder.a  

TARGET = QuickSort BubbleSort
all: $(TARGET)
   #  @echo $(SRCS)
   #  @echo $(dir)
   #  @echo $(OBJS)
QuickSort : QuickSort.o  
	$(CXX) $(CFLAGS) -o $@ $^ $(LDFLAGS)
BubbleSort :  BubbleSort.o 
	$(CXX) $(CFLAGS) -o $@ $^ $(LDFLAGS)

QuickSort.o : quicksort.c
	$(CC) -c $(CFLAGS)  $^ -o $@
BubbleSort.o : BubbleSort.c
	$(CXX) -c $(CFLAGS) $^ -o $@    

.PHONY : clean
clean :
	rm -f *.o BubbleSort QuickSort
