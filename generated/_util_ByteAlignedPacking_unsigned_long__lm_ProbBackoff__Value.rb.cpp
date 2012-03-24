
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/weights.hh"


#include "_util_ByteAlignedPacking_unsigned_long__lm_ProbBackoff__Value.rb.hpp"


void wrap_lm_ProbBackoff_prob_set(lm::ProbBackoff* self, float val) {
	self->prob = val;
}
float wrap_lm_ProbBackoff_prob_get(lm::ProbBackoff* self) {
	return self->prob;
}
void wrap_lm_ProbBackoff_backoff_set(lm::ProbBackoff* self, float val) {
	self->backoff = val;
}
float wrap_lm_ProbBackoff_backoff_get(lm::ProbBackoff* self) {
	return self->backoff;
}

void register_util_ByteAlignedPacking_unsigned_long__lm_ProbBackoff__Value(Rice::Module rb_mKenlm) {
	Rice::Data_Type< util::ByteAlignedPacking<unsigned long, lm::ProbBackoff>::Value > rb_cValue =  Rice::define_class_under< util::ByteAlignedPacking<unsigned long, lm::ProbBackoff>::Value >(rb_mKenlm, "Value");
	rb_cValue.define_constructor(Rice::Constructor< lm::ProbBackoff >());
	rb_cValue.define_method("prob=", &wrap_lm_ProbBackoff_prob_set);
	rb_cValue.define_method("prob", &wrap_lm_ProbBackoff_prob_get);
	rb_cValue.define_method("backoff=", &wrap_lm_ProbBackoff_backoff_set);
	rb_cValue.define_method("backoff", &wrap_lm_ProbBackoff_backoff_get);
}
