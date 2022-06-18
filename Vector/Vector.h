template<typename T>
class vector{

	//data member
	T *arr;
	int cs;
	int ms;

public:
	vector(int max_size=1){
		cs =0;
		ms=max_size;
		arr = new T[ms];
	}
	//we cant make push back as constant function because in pushback we modifying the array and that is the datamember of the class 
	//but we can make d as constant because d is constant at a time of function only one value is give to this function
	void push_back(const T d){
		//two cases
		if(cs==ms){
			//create a new array and delete the old one,double the capacity of new one
			T *oldArr = arr;
			ms=2*ms;
			arr = new T[ms];
			//copy the elements
			for(int i=0;i<cs;i++){
				arr[i] = oldArr[i];
			}
			//delete
			delete [] oldArr;
		}
		arr[cs] = d;
		cs++;
	}
	void pop_back(){
		if(cs>=0){
			cs--;
		}
	}
	//we can check the if vector is not empty
	bool isEmpty() const{
		return cs==0;
	}

	//now we perform operation for front,back,At(i),[]
	T front() const{
		return arr[0];
	}
	T back() const{
		return arr[cs-1];
	}

	T at(int i) const{
		return arr[i];
	}
	int size() const{
		return cs;
	}
	int capacity() const{
		return ms;
	}

	//instead of using at(i) we can use operator overloading
	//so instead of using v.at(i) we can use v[i] using operator overloading
	T operator[](int i){
		return arr[i];
	}
};
