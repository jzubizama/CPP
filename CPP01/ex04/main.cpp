#include <iostream>
#include <fstream>

int	ft_strlen (char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

void	replace(std::string	name, std::string s1, std::string s2)
{
	int				size = s1.length();
	std::string		str;
	char			c;
	std::ifstream	infs(name);
	std::ofstream	ofs(name.append(".replace"));

	c = infs.get();
	while (c != EOF)
	{
		str += c;
		c = infs.get();
	}
	int f = str.find(s1);
	while (f >= 0)
	{
		str.erase(f,size);
		str.insert(f, s2);
		f = str.find(s1);
	}
	ofs << str;
	infs.close();
	ofs.close();
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (1);

	std::string		file(argv[1]);
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);
	replace(file, s1, s2);
	return (0);
}