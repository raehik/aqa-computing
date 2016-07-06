DDL
---

### General notes

  * Just like SQL (even though you don't *need* them), use caps for language
    statements & words.
  * Seems to take most syntax from MySQL.


### Creating tables

```sql
CREATE TABLE Test (
    IDNum        INT          PRIMARY KEY, -- stores an integer, key field
    RegNum       CHAR(7)      FOREIGN KEY, -- stores a string, exactly 20 chars, foreign key
    OwnerName    VARCHAR(50),  -- stores a variable-length string, up to 20 chars
    DateStarted  DATE,         -- stores a date
    MoneyCharged DECIMAL,      -- stores a decimal, good for money etc.
    OwnerAlive   BOOLEAN,      -- stores a boolean
)
```

  * Where not specified for you, **do not** give lengths. The markschemes always
    say they're optional, unless it tells you in the context that it has a
    specific length (in which case you might be using `CHAR`).


### SELECTs

  * To order results alphabetically, add this at the end of the SELECT
    statement:
      * `ORDER BY FieldName(ASC)`
