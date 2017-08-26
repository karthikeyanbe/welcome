
#include
main()
{
char line[81], ctr;
int i,c,end = 0, characters = 0, words = 0, lines = 0;
printf(“\nKEY IN THE TEXT “);
printf(“GIVE ONE SPACE AFTER EACH WORD.\n”);
printf(“WHEN COMPLETED, PRESS ‘ENTER’\n\n”);
while (end == 0)
{
c = 0;
while ((ctr = getchar()) != ‘\n’)
line[c++] = ctr;
line[c] = ‘\0’;
if (line[0] == ‘\0’)
break;
else
{
words++;
for (i = 0; line[i] != ‘\0’; i++)
if (line[i] == ‘ ‘ || line[i] == ‘\t’)
words++;
}
lines = lines + 1;
characters = characters + strlen(line);
}
printf(“\n”);
printf(“\nNumber of lines = %d”, lines);
printf(“\nNumber of words = %d”, words);
printf(“\nNumber of characters = %d”, characters);
} 
