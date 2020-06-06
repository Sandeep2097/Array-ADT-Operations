#include<stdio.h>
#include<stdlib.h>

//Author:- Sandeep Rathore

void insert(int Arr[], int length);
void display(int Arr[], int length);
int append(int Arr[], int element, int length);
int addAtIndex(int Arr[], int element, int atIndex, int length);
int deleteElement(int Arr[], int element, int atIndex, int length);
void linearSearch(int Arr[], int element, int length);
void maxElement(int Arr[], int length);
void minElement(int Arr[], int length);
void reverseArray(int Arr[],int length);
int checkingArrayIsSorted(int Arr[], int length);


int main(){
	
	int Arr[100],length=0;
	int choice,element,atIndex;
	while(1){
		
	printf("\n\nTake Bellow Operations You want to perform\n"
	        "1. Insert elements in Array: \n"
			"2. Display Elements\n"
		    "3. Append an element\n"
			"4. Insert at particular index\n"
			"5. Delete an element at index\n"
			"6. Search an element\n"
			"7. Max Element in the array\n"
			"8. Min Element in the array\n"
			"9. Reverse the Array\n"
			"10. Check if Array is Sorted\n"
			"0. For Exit the program\n\n");
	scanf("%d",&choice);
	switch(choice){
		
		case 1: printf("Enter the size of Array: ");
		        scanf("%d",&length);
		        insert(Arr, length);
		        break;
		case 2: display(Arr, length);
		        break;
		case 3: printf("Enter Element:  ");
		        scanf("%d",&element);
		        length = append(Arr,element,length);
		        break;
		case 4: printf("Enter element: \n");
		        scanf("%d",&element);
		        printf("Enter index number starting from 1 onwards: ");
		        scanf("%d",&atIndex);
		        length=addAtIndex(Arr, element, atIndex, length);
		        break;
		case 5: printf("Enter index number from which element to be delete: ");
		        scanf("%d",&atIndex);
		        length=deleteElement(Arr, element, atIndex, length);
		        break;
		case 6: printf("Enter element to be search: ");
		        scanf("%d",&element);
		        linearSearch(Arr, element, length);
		        break;
		case 7: maxElement(Arr, length);
		        break;
		case 8: minElement(Arr, length);
		        break;
		case 9: reverseArray(Arr,length);;
		        break;
		case 10:checkingArrayIsSorted(Arr,length);
		        break;
		case 0: exit(1);
		default:printf("You opted for a wrong choice\n\n");
		        break;
		
	}
	}
	return 0;
	
}

// Inserting Elements in an Array 
void insert(int Arr[], int length){
	int i;
	printf("Enter %d elements\n", length);
	for(i=0;i<length;i++){
		scanf("%d",&Arr[i]);
	}
	printf("\nInsertion Successful\n");
}

//Display Elements from the array
void display(int Arr[],int length){
	int i;
	for(i=0;i<length;i++){
		printf("\n%d ",Arr[i]);
	}
	printf("\n");
}

//Append an array
int append(int Arr[], int element, int length){
	Arr[length]=element;
	
	printf("Operation Successfull");
	return length+1;
}
//Add element at particular index
int addAtIndex(int Arr[], int element, int index, int length){
	if(index>0 && index <=length){
		int i;
	    for(i=length;i>index-1;i--){
	    	Arr[i]=Arr[i-1];
		}
		Arr[index-1]=element;
		printf("\nOperation Successfull.");
		return length+1;
	}else{
		printf("Invalid index: Please be serious man ");
		return length;
	}
}

//Delete an element
int deleteElement(int Arr[], int element, int atIndex, int length){
	int i;
	if(length==0){
		printf("Currently no elements present in the array\n");
	}else{
		for(i=atIndex-i;i<length;i++){
			Arr[i]=Arr[i+1];
		}
		printf("Deleted Successfully");
		return length-1;
	}
}

//Searching an element;
void linearSearch(int Arr[], int element, int length){
	int i;
	if(length==0){
		printf("Currently no elements present in the array");
	}else{
		for(i=0;i<length;i++){
			if(Arr[i]==element){
				printf("%d is present at location %d ",element, i+1);
			}
		}
		if(i==length){
			printf("Given Element is not present in the array. ");
		}
	}
}

//Max Element in the Array
void maxElement(int Arr[], int length){
	int i,max=Arr[0];
	if(length==0){
		printf("Currently no elements present in the array");
	}
	for(i=0;i<length;i++){
		if(Arr[i]>max){
			max=Arr[i];
		}
		
	}
	printf("Maximum element in the array: %d ",max);
}

//Minimum element in the array
void minElement(int Arr[], int length){
	int i,min=Arr[0];
	if(length==0){
		printf("Currently no elements present in the array");
	}
	for(i=0;i<length;i++){
		if(Arr[i]<min){
			min=Arr[i];
		}
		
	}
	printf("Minumum element in the array: %d ", min);
}

//Reverse Array
void reverseArray(int Arr[],int length){
	int i,j, B[10000];
	if(length==0){
		printf("Currently no elements present in the array");
	}
	for(i=length-1,j=0;i>=0;i--,j++){
		B[j]=Arr[i];
	}
	for(i=0;i<length;i++){
		Arr[i]=B[i];
	}
	printf("Operation Successful");
}

//Checking if Array is Sorted.
int checkingArrayIsSorted(int Arr[], int length){
	int i;
	for(i=0;i<length;i++){
		if(Arr[i]>Arr[i+1]){
			printf("Array is not Sorted");
			return 0;
		}
	}
	printf("Array is sorted");
	return 0;
}
