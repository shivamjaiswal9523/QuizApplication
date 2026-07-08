#include <stdio.h>

int main() {

    char name[50];
    int answer, score = 0;

    printf("=================================\n");
    printf("      QUIZ APPLICATION\n");
    printf("=================================\n");

    printf("Enter Your Name: ");
    scanf("%s", name);

    printf("\nAnswer the following questions:\n");
    printf("Answer only option number.\n");
    
    for(int i=1;i<=3;i++){
    	
    	switch (i){
    		case 1:
    			printf("\nQ1. Which is the largest planet in our Solar System?");
    			printf("\n1. Earth\n2. Mars\n3. Jupiter\n4. Saturn");
    			printf("\nEnter Your Answer: ");
                scanf("%d", &answer);

                if(answer == 3)
                {
                    printf("Correct Answer!\n");
                    score++;
                }
                else
                {
                    printf("Wrong Answer!\n");
                    printf("Correct Answer: 7\n");
                }
                break;
                
            case 2:
            	printf("\nQ2. Which is the national animal of India?");
    			printf("\n1. Lion\n2. Tiger\n3. Elephant\n4. Leopard");
    			printf("\nEnter Your Answer: ");
                scanf("%d", &answer);

                if(answer == 2)
                {
                    printf("Correct Answer!\n");
                    score++;
                }
                else
                {
                    printf("Wrong Answer!\n");
                    printf("Correct Answer: Tiger\n");
                }
                break;
                
            case 3:
            	printf("\nQ3. How many continents are there on Earth?");
    			printf("\n1. 5\n2. 6\n3. 7\n4. 8");
    			printf("\nEnter Your Answer: ");
                scanf("%d", &answer);

                if(answer == 3)
                {
                    printf("Correct Answer!\n");
                    score++;
                }
                else
                {
                    printf("Wrong Answer!\n");
                    printf("Correct Answer: 7\n");
                }
                break;
            	



		}
	}

    

    printf("\n=================================\n");
    printf("         QUIZ RESULT\n");
    printf("=================================\n");
    printf("Name : %s\n", name);
    printf("Score: %d/3\n", score);

    if(score == 3)
        printf("Performance : Excellent\n");
    else if(score >= 2)
        printf("Performance : Good\n");
    else if(score >= 1)
        printf("Performance : Average\n");

    return 0;
}