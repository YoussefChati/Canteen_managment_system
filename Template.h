template<class T>
T toLower(T value)
{
	for (int i = 0; i < value.length(); i++)
	{
		value[i] = tolower(value[i]);
	}
	
	return value;
}
