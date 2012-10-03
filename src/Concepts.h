Concepts.push_back(new Concept("Null concept")); Concepts.push_back(new ConceptBasic("", "std::cout"));
Concepts.push_back(new ConceptBasic("", "<<"));
Concepts.push_back(new ConceptBasic("", "\"Hello World from Conception 2!\""));
Concepts.push_back(new ConceptBasic("", "\" & size of pointer == \""));
Concepts.push_back(new ConceptBasic("", "sizeof")); LastConcept().AddLabel(26);
Concepts.push_back(new ConceptBasic("", "(")); LastConcept().AddLabel(12); LastConcept().AddLabel(15);
Concepts.push_back(new ConceptBasic("", ")")); LastConcept().AddLabel(12); LastConcept().AddLabel(16);
Concepts.push_back(new ConceptBasic("", "void")); LastConcept().AddLabel(26);
Concepts.push_back(new ConceptBasic("", "*"));
Concepts.push_back(new ConceptBasic("", "std::endl"));
Concepts.push_back(new ConceptBasic("", ";"));
Concepts.push_back(new Concept("C++ bracket"));
Concepts.push_back(new ConceptBasic("", "[")); LastConcept().AddLabel(12); LastConcept().AddLabel(15);
Concepts.push_back(new ConceptBasic("", "]")); LastConcept().AddLabel(12); LastConcept().AddLabel(16);
Concepts.push_back(new Concept("C++ opening bracket"));
Concepts.push_back(new Concept("C++ closing bracket"));
Concepts.push_back(new ConceptBasic("", "PrintHi\nWhoa a second line."));
Concepts.push_back(new ConceptBasic("", "return")); LastConcept().AddLabel(26);
Concepts.push_back(new ConceptBasic("", "0"));
Concepts.push_back(new ConceptBasic("", "main"));
Concepts.push_back(new ConceptBasic("", "int")); LastConcept().AddLabel(26);
Concepts.push_back(new ConceptBasic("", "argc"));
Concepts.push_back(new ConceptBasic("", ",")); LastConcept().AddLabel(12);
Concepts.push_back(new ConceptBasic("", "char")); LastConcept().AddLabel(26);
Concepts.push_back(new ConceptBasic("", "argv"));
Concepts.push_back(new Concept("C++ keyword"));
Concepts.push_back(new ConceptBasic("", "iostream"));
Concepts.push_back(new ConceptBasic("Just a random test object", "test"));
Concepts.push_back(new ConceptBasic("", "{")); LastConcept().AddLabel(12); LastConcept().AddLabel(15);
Concepts.push_back(new ConceptBasic("", "}")); LastConcept().AddLabel(12); LastConcept().AddLabel(16);
Concepts.push_back(new ConceptBasic("", "<")); LastConcept().AddLabel(12); LastConcept().AddLabel(15);
Concepts.push_back(new ConceptBasic("", ">")); LastConcept().AddLabel(12); LastConcept().AddLabel(16);
Concepts.push_back(new ConceptBasic("HTML tag", "html"));
Concepts.push_back(new ConceptBasic("HTML tag", "head"));
Concepts.push_back(new ConceptBasic("HTML tag", "body"));
Concepts.push_back(new ConceptBasic("HTML tag", "title"));
//Concepts.push_back(new ConceptCompound("", [](const std::initializer_list<ConceptId> & Parameters){ return ConceptString({FindConcept("<"), GetParameterIfExists(Parameters, 0), FindConcept(">")}); }, {}));
Concepts.push_back(new ConceptBasic("", "/"));
Concepts.push_back(new ConceptParameterized("", [](const ConceptParameters & ConceptParameters){ return ConceptString({FindConcept("<"), ConceptParameters.GetParameterIfExists(0), FindConcept(">")}); }));
Concepts.push_back(new ConceptParameterized("", [](const ConceptParameters & ConceptParameters){ return ConceptString({FindConcept("<"), FindConcept("/"), ConceptParameters.GetParameterIfExists(0), FindConcept(">")}); }));
Concepts.push_back(new ConceptParameterized("", [](const ConceptParameters & ConceptParameters){ return ConceptString({38, ConceptParameters.GetParameterIfExists(1), 39}); }));
Concepts.push_back(new ConceptInstance("", 40, {36}));
Concepts.push_back(new ConceptInstance("", 41, {28}));
//Concepts.push_back(new ConceptParameterized("", [](const ConceptInstance & ConceptInstance){ return ConceptInstanceString({FindConcept("<"), ConceptInstance.GetParameterIfExists(0), FindConcept(">")}); }));
//Concepts.push_back(new ConceptParameterized("", [](const ConceptInstance & ConceptInstance){ return ConceptInstanceString({FindConcept("<"), FindConcept("/"), ConceptInstance.GetParameterIfExists(0), FindConcept(">")}); }));
//Concepts.push_back(new ConceptParameterized("", [](const ConceptInstance & ConceptInstance){ return ConceptInstanceString({::ConceptInstance(38, {ConceptInstance.GetParameterIfExists(0)}), ConceptInstance.GetParameterIfExists(1), ::ConceptInstance(39, {ConceptInstance.GetParameterIfExists(0)})}); }));
//Concepts.push_back(new ConceptParameterized("", [](const std::initializer_list<ConceptId> & Parameters){ return ConceptString({37}); }, {33}));
/*Concepts.push_back(new ConceptCompound("", [](const std::initializer_list<ConceptId> & Parameters){ return ConceptString({FindConcept("<"), *Parameters.begin(), FindConcept(">")}); }, {FindConcept("head")}));
Concepts.push_back(new ConceptCompound("", [](const std::initializer_list<ConceptId> & Parameters){ return ConceptString({FindConcept("<"), *Parameters.begin(), FindConcept(">")}); }, {FindConcept("body")}));
//Concepts.push_back(new ConceptCompound("", {FindConcept("<"), FindConcept("title"), FindConcept(">")}));
Concepts.push_back(new ConceptCompound("", [](const std::initializer_list<ConceptId> & Parameters){ return ConceptString({FindConcept("<"), *Parameters.begin(), FindConcept(">")}); }, {FindConcept("title")}));
//Concepts.push_back(new ConceptCompound("", {FindConcept("<"), FindConcept("/"), FindConcept("title"), FindConcept(">")}));
Concepts.push_back(new ConceptCompound("", [](const std::initializer_list<ConceptId> & Parameters){ return ConceptString({FindConcept("<"), FindConcept("/"), *Parameters.begin(), FindConcept(">")}); }, {FindConcept("title")}));
//Concepts.push_back(new ConceptCompound("", {34, FindConcept("<"), 36}));
Concepts.push_back(new ConceptCompound("", [](const std::initializer_list<ConceptId> & Parameters){ return ConceptString({FindConcept("<"), *Parameters.begin(), FindConcept(">"), *(Parameters.begin() + 1), FindConcept("<"), FindConcept("/"), *Parameters.begin(), FindConcept(">")}); }, {FindConcept("body"), FindConcept("test")}));		// DEBUG
*/
