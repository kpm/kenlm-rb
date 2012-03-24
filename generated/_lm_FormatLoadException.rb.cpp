
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/lm_exception.hh"


#include "_lm_FormatLoadException.rb.hpp"

void register_lm_FormatLoadException(Rice::Module rb_mKenlm) {
	Rice::Data_Type< lm::FormatLoadException > rb_cFormatLoadException =  Rice::define_class_under< lm::FormatLoadException,lm::LoadException >(rb_mKenlm, "FormatLoadException");
	rb_cFormatLoadException.define_constructor(Rice::Constructor< lm::FormatLoadException >());
}
