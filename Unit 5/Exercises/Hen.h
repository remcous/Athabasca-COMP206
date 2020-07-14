// Hen.h

class Hen{
public:
	class Nest;
	friend Nest;
	class Nest{
	public:
		class Egg;
		friend Egg;
		class Egg{
		public:
			void display();
		};

		Egg egg;
		void display();
	};

	Nest nest;
	void display();
	void print();
};