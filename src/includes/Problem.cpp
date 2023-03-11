class Problem
{
  public:
	Problem(int _id = -1, string _data = "")
	{
		setId(_id);
		setData(_data);
	}
	void setId(int _id)
	{
		id = _id;
	}
	int getId()
	{
		return id;
	}
	void setData(string _data)
	{
		data = _data;
	}
	string getData()
	{
		return data;
	}
	void setName(string _name)
	{
		name = _name;
	}
	string getName()
	{
		return name;
	}
	void setDescription(string _description)
	{
		description = _description;
	}
	string getDescription()
	{
		return description;
	}
	void getSolution()
	{
	}

  private:
	int id;
	string data, name, description;
};