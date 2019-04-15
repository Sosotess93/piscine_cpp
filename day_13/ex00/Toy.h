
#ifndef TOY_H_
# define TOY_H_

#include <string>
#include "Picture.h"

class Toy
{
 public:
  enum ToyType {BASIC_TOY, ALIEN};
  Toy();
  Toy(ToyType, std::string const&, std::string const&);
  std::string	getName() const;
  std::string	getAscii() const;
  ToyType	getType() const;
  void		setName(std::string const&);
  bool		setAscii(std::string const&);
 private:
  std::string	_name;
  ToyType	_type;
  Picture	*_pic;
};


#endif /* !TOY_H_ */
