#ifndef HFF962980_0BBF_4D56_938C_18954CF44E36
#define HFF962980_0BBF_4D56_938C_18954CF44E36

#include <stack>

using std::stack;

template<typename T>
struct MyQueue
{
	typedef stack<T> StackType;

	void push(const T& val);
	T& front();
	void pop();

private:
	void move(StackType &srcStack, StackType &dstStack);
private:
	StackType firstStack;
	StackType secondStack;
};

template<typename T>
void MyQueue<T>::push(const T& val)
{
	if(firstStack.empty())
		move(secondStack, firstStack);

	firstStack.push(val);
}

template<typename T>
void MyQueue<T>::pop()
{
	if(secondStack.empty())
		move(firstStack, secondStack);

	secondStack.pop();
}

template<typename T>
T& MyQueue<T>::front()
{
	if(secondStack.empty())
		move(firstStack, secondStack);

	return secondStack.top();
}

template<typename T>
void MyQueue<T>::move(StackType &srcStack, StackType &dstStack)
{
	while(!srcStack.empty())
	{
		dstStack.push(srcStack.top());
		srcStack.pop();
	}
}


#endif /* HFF962980_0BBF_4D56_938C_18954CF44E36 */
