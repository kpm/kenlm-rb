
#include <rice/Module.hpp>
#include <rice/Enum.hpp>
#include "/home/kmeyer/dev/kenlm/lm/read_arpa.hh"
#include "/home/kmeyer/dev/kenlm/lm/lm_exception.hh"


#include "_Kenlm.rb.hpp"

#include "_Kenlm_Ngram.rb.hpp"
#include "_lm_EnumerateVocab.rb.hpp"
#include "_lm_PositiveProbWarn.rb.hpp"
#include "_lm_FullScoreReturn.rb.hpp"
#include "_util_ByteAlignedPacking_unsigned_long__lm_ProbBackoff__Value.rb.hpp"
#include "_util_ByteAlignedPacking_unsigned_long__lm_Prob__Value.rb.hpp"
#include "_lm_LoadException.rb.hpp"
#include "_lm_ConfigException.rb.hpp"
#include "_lm_FormatLoadException.rb.hpp"
#include "_lm_VocabLoadException.rb.hpp"
#include "_lm_SpecialWordMissingException.rb.hpp"
void register_Kenlm() {
	Rice::Module rb_mKenlm =  Rice::define_module("Kenlm");

	{
		typedef void ( *ReadNGramHeader_func_type )( util::FilePiece& in, unsigned int length );
		rb_mKenlm.define_module_function("read_n_gram_header", ReadNGramHeader_func_type( &lm::ReadNGramHeader ), (Rice::Arg("in"), Rice::Arg("length")));
	}
register_Kenlm_Ngram(rb_mKenlm);
register_lm_EnumerateVocab(rb_mKenlm);
register_lm_PositiveProbWarn(rb_mKenlm);
register_lm_FullScoreReturn(rb_mKenlm);
register_util_ByteAlignedPacking_unsigned_long__lm_ProbBackoff__Value(rb_mKenlm);
register_util_ByteAlignedPacking_unsigned_long__lm_Prob__Value(rb_mKenlm);
register_lm_LoadException(rb_mKenlm);
register_lm_ConfigException(rb_mKenlm);
register_lm_FormatLoadException(rb_mKenlm);
register_lm_VocabLoadException(rb_mKenlm);
register_lm_SpecialWordMissingException(rb_mKenlm);

	{
		typedef void ( *ReadEnd_func_type )( util::FilePiece& in );
		rb_mKenlm.define_module_function("read_end", ReadEnd_func_type( &lm::ReadEnd ), (Rice::Arg("in")));
	}

	{
		typedef void ( *ReadARPACounts_func_type )( util::FilePiece& in, std::vector<unsigned long, std::allocator<unsigned long> >& number );
		rb_mKenlm.define_module_function("read_arpa_counts", ReadARPACounts_func_type( &lm::ReadARPACounts ), (Rice::Arg("in"), Rice::Arg("number")));
	}

	{
		typedef void ( *ReadBackoff_func_type )( util::FilePiece& in, lm::ProbBackoff& weights );
		rb_mKenlm.define_module_function("read_backoff_0", ReadBackoff_func_type( &lm::ReadBackoff ), (Rice::Arg("in"), Rice::Arg("weights")));
	}

	{
		typedef void ( *ReadBackoff_func_type )( util::FilePiece& in, lm::Prob& weights );
		rb_mKenlm.define_module_function("read_backoff_1", ReadBackoff_func_type( &lm::ReadBackoff ), (Rice::Arg("in"), Rice::Arg("weights")));
	}
	Rice::Enum<lm::WarningAction> rb_eWarningAction = Rice::define_enum<lm::WarningAction>("WarningAction", rb_mKenlm);
	rb_eWarningAction.define_value("THROW_UP", lm::THROW_UP);
	rb_eWarningAction.define_value("COMPLAIN", lm::COMPLAIN);
	rb_eWarningAction.define_value("SILENT", lm::SILENT);
}
