<?php
/**
 * Copyright Skinit, Inc.
 */

interface ISchematic
{
    const TYPE_TEXT = 'text';
    const TYPE_INTEGER = 'integer';
    const TYPE_NUMBER = 'number';
    const TYPE_FLAG = 'flag';
    const TYPE_DATE_TIME = 'datetime';

    /**
     * Return the name of the schema.
     *
     * @return  string
     */
    function getName();

    /**
     * Return the list of relations (tables in SQL) in this data store as an array of SchemaRelation instances.
     *
     * @return  array
     */
    function getRelations();

    /**
     * Return a list of attributes (columns in SQL) for the provided relation as an array of SchemaAttribute
     * instances.  If the data store does not typically have any attributes for it's key, virtual attributes should be
     * included for these key attributes.  An example might be a service which is given an id to identify a result, but
     * does not return that id in the result data.
     *
     * @param   string  $relationName
     * @return  array
     */
    function getRelationAttributes( $relationName );
    
    /**
     * Return a list of the key attribute tuples (primary and unique keys in SQL) for the provided relation.  The
     * attribute 
     * 
     * @return  array
     */
    function getRelationKeyAttributes( $relationName );

    /**
     * Return a list of relationships (foreign key constraints in SQL) for the provided relation as array of
     * SchemaRelation instances.
     *
     * @param   string  $relationName
     * @return  array
     */
    function getRelationships( $relationName );
    
}
