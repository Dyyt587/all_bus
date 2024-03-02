#ifndef _AFIFO_H
#define _AFIFO_H
 
#include <stddef.h>
typedef unsigned char uint8_t;
typedef struct afifo afifo_t;
struct afifo {
	unsigned char *buffer;	/* the buffer holding the data */
	unsigned int size;	/* the size of the allocated buffer */
	unsigned int in;	/* data is added at offset (in % size) */
	unsigned int out;	/* data is extracted from off. (out % size) */
};
 
/*
 * Macros for declaration and initialization of the afifo datatype
 */
extern struct afifo *afifo_alloc(unsigned int size);
 
extern void afifo_init(struct afifo *fifo, uint8_t *buffer,
			unsigned int size);
extern unsigned int afifo_in(struct afifo *fifo,
				const uint8_t *from, unsigned int len);
extern unsigned int afifo_out(struct afifo *fifo,
				uint8_t *to, unsigned int len);
 
/**
 * afifo_initialized - Check if afifo is initialized.
 * @fifo: fifo to check
 * Return %true if FIFO is initialized, otherwise %false.
 * Assumes the fifo was 0 before.
 */
static inline int afifo_initialized(struct afifo *fifo)
{
	return fifo->buffer != NULL;
}
 
/**
 * afifo_reset - removes the entire FIFO contents
 * @fifo: the fifo to be emptied.
 */
static inline void afifo_reset(struct afifo *fifo)
{
	fifo->in = fifo->out = 0;
}
 
/**
 * afifo_reset_out - skip FIFO contents
 * @fifo: the fifo to be emptied.
 */
static inline void afifo_reset_out(struct afifo *fifo)
{
	fifo->out = fifo->in;
}
 
/**
 * afifo_size - returns the size of the fifo in bytes
 * @fifo: the fifo to be used.
 */
static inline unsigned int afifo_size(struct afifo *fifo)
{
	return fifo->size;
}
 
/**
 * afifo_len - returns the number of used bytes in the FIFO
 * @fifo: the fifo to be used.
 */
static inline unsigned int afifo_len(struct afifo *fifo)
{
	register unsigned int	out;
 
	out = fifo->out;
	
	return fifo->in - out;
}
 
/**
 * afifo_is_empty - returns true if the fifo is empty
 * @fifo: the fifo to be used.
 */
static inline int afifo_is_empty(struct afifo *fifo)
{
	return fifo->in == fifo->out;
}
 
/**
 * afifo_is_full - returns true if the fifo is full
 * @fifo: the fifo to be used.
 */
static inline int afifo_is_full(struct afifo *fifo)
{
	return afifo_len(fifo) == afifo_size(fifo);
}
 
/**
 * afifo_avail - returns the number of bytes available in the FIFO
 * @fifo: the fifo to be used.
 */
static inline unsigned int afifo_avail(struct afifo *fifo)
{
	return afifo_size(fifo) - afifo_len(fifo);
}
 
extern void afifo_skip(struct afifo *fifo, unsigned int len);
 
/*
 * __afifo_add_out internal helper function for updating the out offset
 */
static inline void __afifo_add_out(struct afifo *fifo,
				unsigned int off)
{
	fifo->out += off;
}
 
/*
 * __afifo_add_in internal helper function for updating the in offset
 */
static inline void __afifo_add_in(struct afifo *fifo,
				unsigned int off)
{
	fifo->in += off;
}
 
/*
 * __afifo_off internal helper function for calculating the index of a
 * given offeset
 */
static inline unsigned int __afifo_off(struct afifo *fifo, unsigned int off)
{
	return off & (fifo->size - 1);
}
 
 
 
#endif	/* _afifo_H */
