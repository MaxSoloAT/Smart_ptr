# Smart_ptr
c++ smart pointers &lt;memory>
standard c++: 14 + 
# unique_ptr
The unique_ptr<> template holds a pointer to an object and deletes this object when the unique_ptr<> object is deleted. So, in the example above, it does not matter if the function scope is left through the return statement, at the end of the function or even through an exception: The unique_ptr<> destructor is always called and therefore the object (int in the example) always deleted.
# shared_ptr
The shared_pointer is a reference counting smart pointer that can be used to store and pass a reference beyond the scope of a function. This is particularly useful in the context of OOP, to store a pointer as a member variable and return it to access the referenced value outside the scope of the class.
# weak_ptr
std::weak_ptr is a smart pointer that holds a non-owning ("weak") reference to an object that is managed by std::shared_ptr. It must be converted to std::shared_ptr in order to access the referenced object.
