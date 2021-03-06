<?php
/**
 * Copyright Skinit, Inc.
 */

interface ISearchableDataStore
{

    /**
     * Retrieve a set of tuples (records in SQL) from a relation in the data store and return an iterator for them.
     * Include only tuples that match the filter.  The caller may specify any number of filters as additional arguments.
     * If multiple filters are specified, include tuples that match all of the filters.
     *
     * @param   string      $relationName
     * @param   Filter      $filter_1
     * @return  Iterator
     */
    function find( $relationName, Filter $filter_1 );

    /**
     * Retrieve a tuple (record in SQL) from a relation in the data store and return it.  The tuple must match the
     * filter.  The caller may specify any number of filters as additional arguments.  If multiple filters are
     * specified, return a tuple that matches all of the filters.  If none can be found, return null.  If multiple
     * tuples match the filters, select a single tuple from the set and return it.  The method used to select a tuple
     * in this manner is undefined.
     * 
     * @param   string      $relationName
     * @param   Filter      $filter_1
     * @return  array
     */
    function findOne( $relationName, Filter $filter_1 );
    
}
