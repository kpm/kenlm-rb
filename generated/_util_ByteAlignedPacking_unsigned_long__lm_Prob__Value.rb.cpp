
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/weights.hh"


#include "_util_ByteAlignedPacking_unsigned_long__lm_Prob__Value.rb.hpp"


void wrap_lm_Prob_prob_set(lm::Prob* self, float val) {
	self->prob = val;
}
float wrap_lm_Prob_prob_get(lm::Prob* self) {
	return self->prob;
}

void register_util_ByteAlignedPacking_unsigned_long__lm_Prob__Value(Rice::Module rb_mKenlm) {
	Rice::Data_Type< util::ByteAlignedPacking<unsigned long, lm::Prob>::Value > rb_cValue =  Rice::define_class_under< util::ByteAlignedPacking<unsigned long, lm::Prob>::Value >(rb_mKenlm, "Value");
	rb_cValue.define_constructor(Rice::Constructor< lm::Prob >());
	rb_cValue.define_method("prob=", &wrap_lm_Prob_prob_set);
	rb_cValue.define_method("prob", &wrap_lm_Prob_prob_get);
}
