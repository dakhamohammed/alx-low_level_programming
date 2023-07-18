#ifndef _dog_h_
#define _dog_h_

/**
 * your_dog - typedef of the struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - is a structure that hold information of a dog
 * @name: the name of that dog.
 * @age: the age of the dog.
 * @owner: the owner of that dog.
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

