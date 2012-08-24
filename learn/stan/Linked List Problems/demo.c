#include "link.h"

main(){

struct node* head=NULL;
struct node* copyListNode=NULL;
struct node* listOne=NULL;
struct node* listTwo=NULL;
struct node* listThree=NULL;
int option=10;
int listOpt=0;
int input1,input2,input3,input4,input5,input6,input12,input151,input152,input16;
while(option!=0){
printf("\nSelect one of the following:-\n");
printf("0. EXIT\n");
printf("99. Assign the list (listOne-1/listTwo-2/listThree-3)...\n");
printf("1. Make a new list....\t22. Select MoveNode Function..\n");
printf("2. Add element at front...\t23. Select Alternated Split Using MoveNode\n");
printf("3. Count Elements\n");
printf("4. Print all elements sequentially in list\n");
printf("5. WrongPush testing insert at top\n");
printf("6. Push at start using double pointer\n");
printf("7. Append at end without using push\n");
printf("8. Append at end with using Push\n");
printf("9. Copy Into new List\n");
printf("10. Copy Into new List Using Push\n");
printf("11. Print all elements of copied list\n");
printf("12. Find the count of occurance of an element\n");
printf("13. Delete the whole list\n");
printf("14. Delete first element from the list [Pop]...\n");
printf("15. Insert at specified node..Custom1\n");
printf("16. Sorted Insert..\n");
printf("17. Sort the whole list..\n");
printf("18. Append 2 listOne from listTwo..\n");
printf("19. Front Back Split...\n");
printf("20. Reverse the head list..\n");
printf("21. Delete Duplicates from the head...");
scanf("%d",&option);

switch(option){
case 0: system("clear");
        break;
case 1: printf("Please enter a number you want to insert at first position: \n");
        scanf("%d",&input1);
        head=BuildList(input1);
        printf("Element %d inserted in list at position 1\n",head->data);
        break;
case 2: printf("Enter a number you want to insert at front: \n");
        scanf("%d",&input2);
        head=InsertAtStart(head,input2);
        break;
case 3: printf("%d elements in the list\n",count(head));
        break;
case 4: PrintElem(head);
        break;
case 5: printf("Enter a number you want to insert at front: \n");
        scanf("%d",&input3);
        WrongPush(head,input3);
        break;
case 6: printf("Enter a number you want to insert at front: \n");
        scanf("%d",&input4);
        Push(&head,input4);
        break;
case 7: printf("Enter a number you want to insert at END: \n");
        scanf("%d",&input5);
        AppendNode(&head,input5);
        break;
case 8: printf("Enter a number you want to insert at END: \n");
        scanf("%d",&input6);
        AppendNodeWithPush(&head,input6);
        break;
case 9: printf("Copying List....\n");
        copyListNode=copyList(head);
        break;
case 10:printf("Copying List....\n");
        copyListNode=copyListUsingPush(head);
        break;
case 11:PrintElem(copyListNode);
        break;
case 12:printf("Enter a number you want to check..\n");
	scanf("%d",&input12);
	printf("\nTotal Count is : %d\n",Count(head,input12));
	break;
case 13:DeleteList(&head);
	break;
case 14:printf("Popped element is : %d\n",Pop(&head));
	break;
case 15:printf("Please enter the index and data\n");
	scanf("%d %d",&input151,&input152);
	InsertNthOne(&head,input151,input152);
	break;
case 16:printf("Please Enter the data element for sorted insert..\n");
	scanf("%d",&input16);
	SortedInsertOne(&head,input16);
	break;
case 17:InsertSortOne(&head);
	break;
case 18:Append(&listOne,&listTwo);
	break;
case 19:FrontBackSplit(head,&listOne,&listTwo);
	break;
case 20:ReverseList(&head);
	break;
case 21:RemoveDuplicates(head);
	break;
case 22:MoveNode(&listOne,&listTwo);
	break;
case 23:AlternatingSplit(head,&listOne,&listTwo);
	break;
case 99:printf("Please enter the list u wanna assign to..\n");
	scanf("%d",&listOpt);
	switch(listOpt){
	case 1: listOne=head;
	break;
	case 2: listTwo=head;
	break;
	case 3: head=listOne;
	break;
	case 4: head=listTwo;
	break;
	case 5: head=NULL;
	break;
	}
default:printf("Invalid Input\n");
        break;
}
}
}

