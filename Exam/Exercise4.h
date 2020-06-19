#ifndef __Exercise4_H
#define __Exercise4_H

const unsigned char undefined = 0x00;
const unsigned char sleeping = 0x01;
const unsigned char sitting = 0x02;
const unsigned char walking = 0x04;
const unsigned char jumping = 0x08;
const unsigned char running = 0x10;
const unsigned char fighting = 0x20;
const unsigned char falling = 0x40;
const unsigned char dead = 0x80;

class Avatar
{
public:
					Avatar();
	virtual			~Avatar();

			void	setState(unsigned char new_state);

			void	printState() const;

private:

	unsigned char state;
};


#endif /* __Exercise4_H */
