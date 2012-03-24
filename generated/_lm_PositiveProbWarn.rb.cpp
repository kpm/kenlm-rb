
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/read_arpa.hh"


#include "_lm_PositiveProbWarn.rb.hpp"

void register_lm_PositiveProbWarn(Rice::Module rb_mKenlm) {
	Rice::Data_Type< lm::PositiveProbWarn > rb_cPositiveProbWarn =  Rice::define_class_under< lm::PositiveProbWarn >(rb_mKenlm, "PositiveProbWarn");
	rb_cPositiveProbWarn.define_constructor(Rice::Constructor< lm::PositiveProbWarn >());
	rb_cPositiveProbWarn.define_constructor(Rice::Constructor< lm::PositiveProbWarn,lm::WarningAction >());

	{
		typedef void ( lm::PositiveProbWarn::*Warn_func_type )( float prob );
		rb_cPositiveProbWarn.define_method("warn", Warn_func_type( &lm::PositiveProbWarn::Warn ), (Rice::Arg("prob")));
	}
}
