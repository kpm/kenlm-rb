
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/return.hh"


#include "_lm_FullScoreReturn.rb.hpp"


void wrap_lm_FullScoreReturn_prob_set(lm::FullScoreReturn* self, float val) {
	self->prob = val;
}
float wrap_lm_FullScoreReturn_prob_get(lm::FullScoreReturn* self) {
	return self->prob;
}
void wrap_lm_FullScoreReturn_ngram_length_set(lm::FullScoreReturn* self, unsigned char val) {
	self->ngram_length = val;
}
unsigned char wrap_lm_FullScoreReturn_ngram_length_get(lm::FullScoreReturn* self) {
	return self->ngram_length;
}
void wrap_lm_FullScoreReturn_independent_left_set(lm::FullScoreReturn* self, bool val) {
	self->independent_left = val;
}
bool wrap_lm_FullScoreReturn_independent_left_get(lm::FullScoreReturn* self) {
	return self->independent_left;
}
void wrap_lm_FullScoreReturn_extend_left_set(lm::FullScoreReturn* self, ::uint64_t val) {
	self->extend_left = val;
}
::uint64_t wrap_lm_FullScoreReturn_extend_left_get(lm::FullScoreReturn* self) {
	return self->extend_left;
}

void register_lm_FullScoreReturn(Rice::Module rb_mKenlm) {
	Rice::Data_Type< lm::FullScoreReturn > rb_cFullScoreReturn =  Rice::define_class_under< lm::FullScoreReturn >(rb_mKenlm, "FullScoreReturn");
	rb_cFullScoreReturn.define_constructor(Rice::Constructor< lm::FullScoreReturn >());
	rb_cFullScoreReturn.define_method("prob=", &wrap_lm_FullScoreReturn_prob_set);
	rb_cFullScoreReturn.define_method("prob", &wrap_lm_FullScoreReturn_prob_get);
	rb_cFullScoreReturn.define_method("ngram_length=", &wrap_lm_FullScoreReturn_ngram_length_set);
	rb_cFullScoreReturn.define_method("ngram_length", &wrap_lm_FullScoreReturn_ngram_length_get);
	rb_cFullScoreReturn.define_method("independent_left=", &wrap_lm_FullScoreReturn_independent_left_set);
	rb_cFullScoreReturn.define_method("independent_left", &wrap_lm_FullScoreReturn_independent_left_get);
	rb_cFullScoreReturn.define_method("extend_left=", &wrap_lm_FullScoreReturn_extend_left_set);
	rb_cFullScoreReturn.define_method("extend_left", &wrap_lm_FullScoreReturn_extend_left_get);
}
