#include <stdio.h>
#include <stdlib.h>
#include "osHeader.h"

int main(void){
  //Create task
  printf("Create task\n");

  createTask(Task1, 1, TaskId_1);
  createTask(Task2, 2, TaskId_2);

  //Start OS
  startOS();

  return 0;
}

void Task1(){
  while(1){
    printf("I am task 1\n");

    //wait
    sleep(1);//1 sec

    //stop the task
    waitTask();
  }
}

void Task2(){
  while(1){
    printf("I am task 2\n");
    
    //wait
    sleep(1);//1 sec

    //start the task
    startTask(TaskId_1);
  }
}
