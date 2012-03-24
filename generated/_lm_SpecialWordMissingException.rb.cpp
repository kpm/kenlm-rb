
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/lm_exception.hh"


#include "_lm_SpecialWordMissingException.rb.hpp"

void register_lm_SpecialWordMissingException(Rice::Module rb_mKenlm) {
	Rice::Data_Type< lm::SpecialWordMissingException > rb_cSpecialWordMissingException =  Rice::define_class_under< lm::SpecialWordMissingException,lm::VocabLoadException >(rb_mKenlm, "SpecialWordMissingException");
	rb_cSpecialWordMissingException.define_constructor(Rice::Constructor< lm::SpecialWordMissingException >());
}
