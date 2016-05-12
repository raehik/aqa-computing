Databases
---------

### ER modelling

  * One to one -- e.g. spouses
  * One to many -- e.g. a tutor has many tutees
  * Many to one
  * Many to many

  * **Relation:** a set of attributes and rows (a table)
  * **Attribute:** a property (field) of a table column
  * **Primary key:** an attribute that uniquely identifies a table row
  * **Foreign key:** an attribute in one table that is a *primary key* in
    another
  * **Composite key:** a primary key made up of multiple attributes
  * **Relational database:** a collection of tables

  * **Referential integrity:** if a value appears in a foreign key in one table,
    it must be a primary key in another


### Normalisation

  * **Normalisation:** a technique used to remove redundant/'orphaned' data and
    minimise data duplication, so that altering data doesn't lead to
    inconsistencies


#### First Normal Form (1NF)

  * No two rows should contain repeating information.
  * Each column in a table should contain one piece of data, not multiple pieces


#### Second Normal Form (2NF)

  * Must be in 1NF.
  * No partial key dependencies: non-key attributes cannot be dependent on
    primary keys (? TODO)


#### Third Normal Form (3NF)

  * Must be in 2NF.
  * Contains no non-key dependencies: everything left is TODO


### SQL

In the exam, DDL = creating databases, DML = insert/update/delete records.

SQL is **declarative**: we tell it *what* to do rather than *how*. e.g. we tell
it to select a range of data, but not the way in which to do it.
