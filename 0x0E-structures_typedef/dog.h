#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct dog description.
 *
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of dog.
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


/**
 * dog_t - Typedef for dog_t.
 */
typedef struct dog dog_t;


dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
