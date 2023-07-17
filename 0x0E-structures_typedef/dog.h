#ifndef _dog_h_
#define _dog_h_

/**
 * your_dog - typedef of the struct dog
 */
typedef struct dog your_dog;

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

#endif

