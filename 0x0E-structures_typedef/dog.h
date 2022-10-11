#define DOG

#ifndef DOG


/**
 * struct dog - class
 * @name:Dog's Name 
 * @age: Dog's Age 
 * @owner: Dog's Owner
*/

typedef struct dog

{

	char *name;

	float age;

	char *owner;

} dog_t;



int _strlen(char *s);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

char *_strdup(char *str);


#endif
