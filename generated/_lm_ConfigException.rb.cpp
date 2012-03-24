
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/lm_exception.hh"


#include "_lm_ConfigException.rb.hpp"

void register_lm_ConfigException(Rice::Module rb_mKenlm) {
	Rice::Data_Type< lm::ConfigException > rb_cConfigException =  Rice::define_class_under< lm::ConfigException,util::Exception >(rb_mKenlm, "ConfigException");
	rb_cConfigException.define_constructor(Rice::Constructor< lm::ConfigException >());
}
