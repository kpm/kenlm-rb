
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/lm_exception.hh"


#include "_lm_VocabLoadException.rb.hpp"

void register_lm_VocabLoadException(Rice::Module rb_mKenlm) {
	Rice::Data_Type< lm::VocabLoadException > rb_cVocabLoadException =  Rice::define_class_under< lm::VocabLoadException,lm::LoadException >(rb_mKenlm, "VocabLoadException");
	rb_cVocabLoadException.define_constructor(Rice::Constructor< lm::VocabLoadException >());
}
