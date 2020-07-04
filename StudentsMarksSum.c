

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
    
  //Write your code here.
    int sum=0;
  if (gender=='g'){
      for (int j=1;j<number_of_students ;j+=2){
          sum+=marks[j];

      }
  }else if (gender=='b'){
      for (int j=0;j<number_of_students ;j+=2){
          sum+=marks[j];

      }
  }
  return sum;
  
}

