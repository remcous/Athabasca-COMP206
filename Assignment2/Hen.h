// Hen.h

/*
Title: Hen.h
Description: Hen class declaration
Date: March 12, 2016
Author: Remi Coussement
Version 1.0
*/

#ifndef HEN_H
#define HEN_H

class Hen{
public:
	class Nest{
	public:
		class Egg{
		public:
			void display();
			Egg();
			~Egg();
		};

		Nest();
		~Nest();
		void display();
	};

	Hen();
	~Hen();
	void display();
};
#endif //	HEN_H