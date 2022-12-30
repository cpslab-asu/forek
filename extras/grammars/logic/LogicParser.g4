/// The core expressions used in logic. This includes the most common logical
/// connectives and some equivalency rules.
///
/// Within this grammar, the primitive truth values True and False are supported.
/// Therefore, to formulate more interesting logical expressions, the atom rule
/// should be extended.
///
/// # Extending the Atom
///
/// ```antlr4
/// // ExtendedGrammar.g4
/// ...
///
/// extendedGrammarAtom : logicAtom
///     | <additional rule(s)>
///     ;
/// ```

parser grammar LogicParser;

/// A logic formula that is well-formed ("wff").
///
/// This rule includes the core logical connectives operating over the atomic
/// components of the language (i.e., atoms).
logicFormula : LeftParenthesis logicFormula RightParenthesis
    | NegationOperator logicFormula
    | logicFormula ConjunctionOperator logicFormula
    | logicFormula DisjunctionOperator logicFormula
    | logicFormula ImplicationOperator logicFormula
    | logicFormula IffOperator logicFormula
    | logicAtom
    ;

/// The atomic component of `Logic`.
///
/// This resolves to boolean truth-values `True` and `False`.
logicAtom : True
    | False
    ;
