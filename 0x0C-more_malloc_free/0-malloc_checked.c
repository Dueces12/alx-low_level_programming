/*
 * malloc_checked - allocated memory using malloc
 * @b : number of bytes to allocate
 * Return :  pointer to memory that allocated
 */
void *malloc_checked(unsigned int b)
{
	void *pntr;

	pntr = malloc(b);
	if (pntr == NULL)
	{
		exit(98);
	}
	return (pntr);
}
