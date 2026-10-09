```table-of-contents
title: 
style: nestedList # TOC style (nestedList|nestedOrderedList|inlineFirstLevel)
minLevel: 0 # Include headings from the specified level
maxLevel: 3 # Include headings up to the specified level
include: 
exclude: 
includeLinks: true # Make headings clickable
hideWhenEmpty: false # Hide TOC if no headings are found
debugInConsole: false # Print debug info in Obsidian console
```

## 1. Introduction

The introduction should provide an overview of the entire SRS.
### 1.1 Purpose

- Delineate the purpose of the SRS
- Specify the intended audience for the SRS

### 1.2 Scope

- Identify the software product(s) to be produced by name (e.g. Host DBMS, Report Generator, etc.)
- Explain whate the software product(s) will and if necessary, will not do
- Describe the application of the software being specified, incluiding relevant benefits, objectives and goals
- Be consistent with similar statements in higher-level specifications (e.g. the system requirements specification), if they exist

### 1.3 Definitions, acronyms and abreviations

- This section should provide the definitions of all terms, acronyms and abbreviations required to properly interpret the SRS.

### 1.4 References

- Provide a complete list of all documents referenced in the SRS
- Identify each document by title, report number (if applicable), date, and publishing organization
- Specify the sources from which the references can be obtained

### 1.5 Overview

- Describe what the rest of the SRS contains
- Explain how the SRS is organized

## 2. Overall description

### 2.1 Product perspective

Should put the product into perspective with other related products. If the product is independent and totally self-contained, it should be so stated here.

If the SRS defines a product that is a component of a larger system, as frequently occurs, then this subsection should relate the requirements of that system and the software.

A block diagram showing the mayor components of the larger system, interconnections and external interfaces can be helpful.

This section should also describe how the software operates inside various constraints (for more information see IEEE 830-1998 p.20):
- System interfaces
- User interfaces
- Hardware interfaces
- Software interfaces
- Communication interfaces
- Memory
- Operations
- Site adaptation requirements
### 2.2 Product functions

This subsection should provide a summary of the major functions that the software will perform.

For example, an SRS for an accounting program may use this part to address customer account maintenance, customer statement, and invoice preparation without mentioning the vast amount of detail that each of those functions requires.

For sake of clarity:
- The functions should be organized in a way that makes the list of functions understandable to the customer or to anyone else reading the document for the first time.
- Textual or graphical methods can be used to show the different functions and their relationships. Such a diagram is not intended to show a design of a product, but simply shows the logical relation-ships among variables.

### 2.3 User characteristics

This subsection should describe those general characteristics of the intended users of the product incluiding educational level, experience, and technical expertise. It should not be used to state specific requirements, but rather should provide the reasons why certain specific requirements are later specified in the section 3 "Specific requirements".

### 2.4 Constraints

This subsection should provide a general description of any other items that will limit the developer's optinos. These include:
- Regulatory policies
- Hardware limitations (e.g. signal timing requirements)
- Interfaces to other applications
- Parallel operation
- Audit functions
- Control functions
- Higher-order languages requirements
- Signal handshake protocols (e.g. XON-XOFF)
- Reliability requirements
- Criticality of the application
- Safety and security considerations

### 2.5 Assumptions and dependencies

This subsection should list each of the factors that affect the requirements stated in the SRS.

These factors are not design constraints on the software but are, rather, any changes to them that can affect the requirements in the SRS.

For example, an assumption may be that a specific operating system will be available on the hardware designated for the software product. If, in fact, the operating system is not available, the SRS would then have to change accordingly.

### 2.6 Apportioning of requirements

This subsection should identify requirements that may be delayed until future versions of the system.

## 3. Specific requirements

This section should contain all of the software requirements to a level of detail sufficient to enable designers to design a system to satisfy those requirements, and testers to test that the system satisfies those requirements.

Throughout this section, every stated requirement should be externally perceivable by users, operators, or other external systems. These requirements should include at a minimum a description of every input (stimulus) into the system, every output (response) from the system, and all functions performed by the system in response to an input or in support of an output. As this is often the largest and most important part of the SRS, the following principles apply:
- Specific requirements should be stated in conformance with all the characteristics described in IEEE 830-1998 - 4.3.
- Specific requirements should be cross-referenced to earlier documents that relate.
- All requirements should be uniquely identifiable.
- Careful attention should be given to organizing the requirements to maximize readability.

### 3.1 External interfaces

This should be a detailed description of all inputs into and outputs from the software system. It should complement the interface descriptions in 5.2 and should not repeat information there.

It should include both content and format as follows:
- Name of item
- Description of purpose
- Source of input or destination of output
- Valid range, accuracy, and/or tolerance
- Units of measure
- Timing
- Relationships to other inputs/outputs
- Screen formats/organization
- Window formats/organization
- Data formats
- Command formats
- End messages

### 3.2 Functions

Functional requirements should define the fundamental actions that must take place in the software in accepting and processing the inputs and in processing and generating the outputs. These are generally listed as “shall” statements starting with “The system shall…”

These include
- Validity checks on the inputs
- Exact sequence of operations
- Responses to abnormal situations, including:
	- Overflow
	- Communication facilities
	- Error handling and recovery
- Effect of parameters
- Relationship of outputs to inputs, including
	1. Input/output sequences
	2. Formulas for input to output conversion

It may be appropriate to partition the functional requirements into subfunctions or subprocesses. This does not imply that the software design will also be partitioned that way.

### 3.3 Performance requirements

This subsection should specify both the static and the dynamic numerical requirements placed on the software or on human interaction with the software as a whole. Static numerical requirements may include the following:
- The number of terminals to be supported
- The number of simultaneous users to be supported
- Amount and type of information to be handled

Static numerical requirements are sometimes identified under a separate section entitled Capacity.

Dynamic numerical requirements may include, for example, the numbers of transactions and tasks and the amount of data to be processed within certain time periods for both normal and peak workload conditions.

All of these requirements should be stated in measurable terms:

> 95% of the transactions shall be processed in less than 1 s

**Note:** Numerical limits applied to one specific function are normally specified as part of the processing subparagraph description of that function

### 3.4 Logical database requirements

## Appendixes



## Index