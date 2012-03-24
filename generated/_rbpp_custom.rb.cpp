#include "_rbpp_custom.rb.hpp"
template<>
Rice::Object to_ruby<lm::ngram::Config::ARPALoadComplain >(lm::ngram::Config::ARPALoadComplain const & a) {
	return Rice::Data_Object<lm::ngram::Config::ARPALoadComplain >(new lm::ngram::Config::ARPALoadComplain(a), Rice::Data_Type<lm::ngram::Config::ARPALoadComplain >::klass(), 0, 0);
}
template<>
Rice::Object to_ruby<lm::ngram::ModelType >(lm::ngram::ModelType const & a) {
	return Rice::Data_Object<lm::ngram::ModelType >(new lm::ngram::ModelType(a), Rice::Data_Type<lm::ngram::ModelType >::klass(), 0, 0);
}
template<>
Rice::Object to_ruby<lm::WarningAction >(lm::WarningAction const & a) {
	return Rice::Data_Object<lm::WarningAction >(new lm::WarningAction(a), Rice::Data_Type<lm::WarningAction >::klass(), 0, 0);
}
