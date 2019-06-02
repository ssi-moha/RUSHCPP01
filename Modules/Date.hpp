#ifndef DATE_H
# define DATE_H
# include <string>

class Date {

public:

    Date( void );
    Date(Date const & src);
    ~Date( void );

    Date &  operator=(Date const & rhs);

    std::string today(void) const;
    std::string now(void) const;
    virtual std::string getFormattedInfo( void ) const;

private:

    std::string _current_day;    
    std::string _current_time;    

};

#endif