
#include <rice/Data_Type.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/lm_exception.hh"


#include "_lm_LoadException.rb.hpp"

void register_lm_LoadException(Rice::Module rb_mKenlm) {
	Rice::Data_Type< lm::LoadException > rb_cLoadException =  Rice::define_class_under< lm::LoadException,util::Exception >(rb_mKenlm, "LoadException");
}
